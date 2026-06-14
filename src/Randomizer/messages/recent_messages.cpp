#include <Randomizer/messages/recent_messages.h>

#include <Modloader/modloader.h>
#include <Modloader/app/methods/AnimatorDriver.h>
#include <Modloader/app/methods/BaseAnimator.h>
#include <Modloader/app/methods/LegacyTransparencyAnimator.h>
#include <Modloader/app/methods/ScalePositionForAspectRatio.h>
#include <Modloader/app/types/LegacyTransparencyAnimator.h>
#include <Modloader/app/types/ScalePositionForAspectRatio.h>
#include <Core/api/screen_position.h>

#include "Core/api/game/game.h"
#include "Modloader/app/methods/TimeUtility.h"
#include "Modloader/windows_api/console.h"


namespace randomizer::messages {
    using namespace app::classes;

    constexpr int MAX_RECENT_MESSAGES = 10;

    RecentMessagesView::RecentMessagesView() {
        if (modloader::is_game_ready()) {
            initialize_game_objects();
        } else {
            m_on_game_ready_droppable = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [this](auto) {
                initialize_game_objects();
            });
        }
    }

    void RecentMessagesView::push_message(const std::string& message) {
        m_messages.push_front(message);

        if (m_messages.size() >= MAX_RECENT_MESSAGES) {
            m_messages.pop_back();
        }
    }

    void RecentMessagesView::show(const float timeout) {
        if (m_background_sprite == nullptr) {
            // Not initialized yet...
            return;
        }

        if (m_timeout > 0.f) {
            m_timeout = timeout;
            return;
        }

        m_timeout = timeout;
        set_background_sprite_visible(true);

        // Start in the bottom left corner, with a bit of padding
        app::Vector3 cursor = core::api::screen_position::get(core::api::screen_position::ScreenPosition::BottomLeft);
        cursor.x += 0.4f;
        cursor.y += 0.4f;

        for (const auto& m_message: m_messages) {
            auto message_box = std::make_unique<core::api::messages::MessageBox>();
            message_box->show_background().set(false);
            message_box->text_alignment().set(app::AlignmentMode__Enum::Left);
            message_box->box_horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Left);
            message_box->box_vertical_anchor().set(app::VerticalAnchorMode__Enum::Bottom);
            message_box->coordinate_system().set(core::api::messages::CoordinateSystem::UI);
            message_box->text().set(std::format("<s_0.7><ls_0.9>{}</></>", m_message));
            message_box->position().set(cursor);
            message_box->fade_in().set(0.4f);
            message_box->show(false, false, true);
            cursor.y += std::abs(message_box->text_bounds().m_Height) + 0.04f;

            m_message_boxes.push_back(std::move(message_box));
        }

        m_on_update_droppable = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [this](auto, auto) {
            on_update();
        });
    }

    void RecentMessagesView::clear_messages() {
        m_messages.clear();
        m_timeout = 0.f;
    }

    bool RecentMessagesView::is_visible() const {
        return m_timeout > 0.f;
    }

    void RecentMessagesView::initialize_game_objects() {
        m_on_game_ready_droppable = nullptr;

        m_background_sprite = std::make_unique<core::api::graphics::Sprite>(core::api::graphics::Sprite::Anchor::BottomLeft);
        il2cpp::unity::set_object_name(m_background_sprite->get_game_object(), "m_recent_pickups_background");

        m_background_sprite->layer(Layer::UI);
        m_background_sprite->local_scale({8, 8, 8});

        auto bottom_left = core::api::screen_position::get(core::api::screen_position::ScreenPosition::BottomLeft, false);
        bottom_left.z = -0.2f;
        m_background_sprite->local_position(bottom_left);

        m_background_sprite->texture(core::api::graphics::textures::get_texture_from_identifier("file:textures/gradient_corner_bottom_left.png"));

        const auto scale_position_component = il2cpp::unity::add_component<app::ScalePositionForAspectRatio>(
            m_background_sprite->get_game_object(), types::ScalePositionForAspectRatio::get_class()
        );
        ScalePositionForAspectRatio::ctor(scale_position_component);

        const auto animator_component = il2cpp::unity::add_component<app::LegacyTransparencyAnimator>(
            m_background_sprite->get_game_object(), types::LegacyTransparencyAnimator::get_class()
        );
        m_background_sprite_animator = il2cpp::GCRef(animator_component);

        LegacyTransparencyAnimator::ctor(animator_component);

        animator_component->fields.AnimateChildren = true;
        animator_component->fields.AutoEnableTargets = true;
        LegacyTransparencyAnimator::CacheOriginals(animator_component);

        BaseAnimator::set_Speed(reinterpret_cast<app::BaseAnimator*>(animator_component), 4.f);
    }

    void RecentMessagesView::set_background_sprite_visible(const bool visible) {
        const auto animator = **m_background_sprite_animator;
        LegacyTransparencyAnimator::UpdateActiveStates(animator);

        const auto driver = BaseAnimator::get_AnimatorDriver(reinterpret_cast<app::BaseAnimator*>(animator));

        if (visible) {
            AnimatorDriver::ContinueForward(driver);
        } else {
            AnimatorDriver::ContinueBackwards(driver);
        }
    }

    void RecentMessagesView::on_update() {
        m_timeout -= TimeUtility::get_deltaTime();

        if (m_timeout <= 0.f) {
            m_on_update_droppable = nullptr;
            set_background_sprite_visible(false);
            m_message_boxes.clear();
        }
    }
} // namespace randomizer::messages
