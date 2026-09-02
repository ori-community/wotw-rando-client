#include <Core/settings.h>
#include <Modloader/app/methods/OriCell.h>
#include <Modloader/app/methods/OriCellBar.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/UnityEngine/Mathf.h>
#include <Modloader/app/types/Characters.h>


namespace randomizer::ui {
    using namespace app::classes;

    namespace {
        bool disable_health_and_energy_bar_animations;

        /*
         * This is almost a reimplementation of the original DoUpdate function
         * except we capture the state of inRange at the beginning, and if it was
         * true we call OriCell::UpdateVisuals in the end regardless.
         */
        IL2CPP_INTERCEPT(void, OriCell, DoUpdate, app::OriCell* this_ptr) {
            if (OriCell::get_ShouldBeShown(this_ptr)) {
                OriCell::Show(this_ptr);
            } else {
                OriCell::Hide(this_ptr);
            }

            if (!types::Characters::get_class()->static_fields->HasSein) {
                return;
            }

            auto update_visuals = false;
            const auto in_range_at_start = this_ptr->fields.inRange;

            this_ptr->fields.inRange = std::floorf(this_ptr->fields.m_currentMinValue) <= this_ptr->fields.CellBaseValue + 1.0;
            if (
                this_ptr->fields.m_currentMinValue != this_ptr->fields._CurrentValue_k__BackingField ||
                this_ptr->fields.m_capMaxValue != this_ptr->fields._MaxValue_k__BackingField ||
                this_ptr->fields.DebugUpdate
            ) {
                OriCell::UpdateValue(this_ptr);
                update_visuals = true;
            }
            if (this_ptr->fields.m_currentMinValue == this_ptr->fields.m_currentMaxValue) {
                if (OriCell::get_FreezeTimedOut(this_ptr) && this_ptr->fields.m_currentMinValue == this_ptr->fields.m_currentMaxValue) {
                    this_ptr->fields.m_firstChange = -1.0;
                }
            } else {
                if (OriCell::get_FreezeTimedOut(this_ptr)) {
                    this_ptr->fields.m_currentMaxValue = UnityEngine::Mathf::MoveTowards(
                        this_ptr->fields.m_currentMaxValue,
                        this_ptr->fields.m_currentMinValue,
                        TimeUtility::get_fixedDeltaTime() * this_ptr->fields.ValueChangeRate
                    );
                    update_visuals = true;
                }
            }
            if (this_ptr->fields.m_capMinValue != this_ptr->fields.m_capMaxValue && OriCell::get_FreezeTimedOut(this_ptr)) {
                this_ptr->fields.m_capMinValue = UnityEngine::Mathf::MoveTowards(
                    this_ptr->fields.m_capMinValue, this_ptr->fields.m_capMaxValue, TimeUtility::get_fixedDeltaTime() * this_ptr->fields.ValueChangeRate
                );
                update_visuals = true;
            }

            auto in_range = this_ptr->fields.inRange;
            in_range = this_ptr->fields.CellBaseValue <= std::ceilf(this_ptr->fields.m_currentMaxValue) && in_range;
            this_ptr->fields.inRange = update_visuals;
            this_ptr->fields.updateVisualsDebug = update_visuals;

            if ((update_visuals && in_range) || in_range_at_start) {
                OriCell::UpdateVisuals(this_ptr);
            }
        }

        IL2CPP_INTERCEPT(void, OriCell, UpdateVisuals, app::OriCell* this_ptr) {
            if (disable_health_and_energy_bar_animations) {
                this_ptr->fields.ValueChangeRate = 500.0f;
                this_ptr->fields.ValueFreezeTime = .0f;
            } else {
                this_ptr->fields.ValueChangeRate = 10.0f;
                this_ptr->fields.ValueFreezeTime = .5f;
            }

            next::OriCell::UpdateVisuals(this_ptr);
        }

        IL2CPP_INTERCEPT(void, OriCellBar, UpdateVisuals, app::OriCellBar* this_ptr, bool force_update) {
            if (disable_health_and_energy_bar_animations) {
                this_ptr->fields.ValueChangeRate = 500.0f;
                this_ptr->fields.ValueFreezeTime = .0f;
            } else {
                this_ptr->fields.ValueChangeRate = 10.0f;
                this_ptr->fields.ValueFreezeTime = .5f;
            }

            next::OriCellBar::UpdateVisuals(this_ptr, force_update);
        }

        [[maybe_unused]]
        auto on_settings_loaded = core::settings::event_bus().register_handler(core::settings::SettingsEvent::Load, EventTiming::After, [](auto, auto) {
            disable_health_and_energy_bar_animations = core::settings::disable_health_and_energy_bar_animations();
        });
    } // namespace
} // namespace randomizer::ui
