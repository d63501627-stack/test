#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Мы "хукаем" (изменяем) главное меню игры
class $modify(MenuLayer) {
    bool init() {
        // Запускаем стандартную инициализацию меню
        if (!MenuLayer::init()) return false;

        // Создаем всплывающее окно
        auto alert = FLAlertLayer::create(
            "Geode на телефоне",    // Заголовок
            "Мод успешно собран!",  // Текст
            "Ура!"                  // Кнопка
        );
        alert->show();

        return true;
    }
};
