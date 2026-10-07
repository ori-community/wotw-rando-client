#include <Core/api/audio.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/events/task.h>
#include <Core/property/reactivity.h>
#include <Core/uber_states/core_uber_states.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/SwitchSeriesPuzzle.h>
#include <Modloader/app/methods/SwitchSeriesPuzzleSwitchSetupHolder.h>
#include <Modloader/app/methods/UberShaderRenderQueue.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Vector3.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/il2cpp_helpers.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <magic_enum/magic_enum.hpp>
#include <queue>

namespace {
    using namespace app::classes;
    using namespace app::classes::UnityEngine::Vector3::operators;

    constexpr auto STONE_ANCHOR_POSITION = app::Vector3(-926.7, -4491.5, 0);  // The center position where stones will be placed
    constexpr auto STONE_GAP = 2.3f;  // The distance between stones
    constexpr auto STONE_ANGLE_PER_UNIT = 2.f;  // The angle stones are tilted per unit offset from STONE_ANCHOR_POSITION on the x axis
    constexpr auto MAX_BELL_SEQUENCE_LENGTH = 9;

    enum class Bell {
        Left = 1,
        Center = 2,
        Right = 3,
    };

    std::vector desired_sequence = {Bell::Left, Bell::Center, Bell::Right, Bell::Right, Bell::Left, Bell::Center, Bell::Left};
    std::deque<Bell> bell_queue_burrows;
    std::deque<Bell> bell_queue_tree;

    std::optional<Bell> get_bell_for_stone_index(unsigned int index) {
        int value;

        switch (index) {
            case 0:
                value = randomizer::uber_states::state<"randoState", "bell1">().get();
                break;
            case 1:
                value = randomizer::uber_states::state<"randoState", "bell2">().get();
                break;
            case 2:
                value = randomizer::uber_states::state<"randoState", "bell3">().get();
                break;
            case 3:
                value = randomizer::uber_states::state<"randoState", "bell4">().get();
                break;
            case 4:
                value = randomizer::uber_states::state<"randoState", "bell5">().get();
                break;
            case 5:
                value = randomizer::uber_states::state<"randoState", "bell6">().get();
                break;
            case 6:
                value = randomizer::uber_states::state<"randoState", "bell7">().get();
                break;
            case 7:
                value = randomizer::uber_states::state<"randoState", "bell8">().get();
                break;
            case 8:
                value = randomizer::uber_states::state<"randoState", "bell9">().get();
                break;
            default:
                return std::nullopt;
        }

        if (magic_enum::enum_contains<Bell>(value)) {
            return static_cast<Bell>(value);
        }

        return std::nullopt;
    }

    template<typename BOOLEAN_UBER_STATE_T> requires core::api::uber_states::ReadableUberState<bool, BOOLEAN_UBER_STATE_T>
    void on_bell_rung(
        app::SwitchSeriesPuzzle* switch_series_puzzle,
        const app::SwitchSeriesPuzzleSetupData* activated_state,
        BOOLEAN_UBER_STATE_T& event_uber_state,
        std::deque<Bell>& bell_queue,
        bool expect_reverse_sequence
    ) {
        // do nothing if puzzle already completed
        if (event_uber_state.get()) {
            return;
        }

        // get rung bell
        const auto changed_state = SwitchSeriesPuzzle::GetChangedState(switch_series_puzzle);
        if (changed_state == nullptr) {
            return;
        }
        const auto changed_uber_state = core::api::uber_states::UntypedUberState::from_native_ptr(reinterpret_cast<app::IUberState*>(changed_state));

        Bell bell;
        switch (changed_uber_state.get_uber_id().member) {
            case 1919: {  // bellAState
                bell = Bell::Left;
            } break;
            case 24796: {  // bellBState
                bell = Bell::Center;
            } break;
            case 7459: {  // bellCState
                bell = Bell::Right;
            } break;
            default:
                return;
        }

        // add new bell to queue and pop first
        bell_queue.push_back(bell);
        while (bell_queue.size() > desired_sequence.size()) {
            bell_queue.pop_front();
        }

        const auto sequence_completed = expect_reverse_sequence ? std::ranges::equal(bell_queue, std::ranges::reverse_view(desired_sequence))
                                                                : std::ranges::equal(bell_queue, desired_sequence);

        if (sequence_completed) {
            // mark puzzle as solved and play timeline
            event_uber_state.set(true);
            SwitchSeriesPuzzleSwitchSetupHolder::StopTimelines(switch_series_puzzle->fields.SetupStates);
            Moon::Timeline::TimelineEntity::StartPlayback_1(reinterpret_cast<app::TimelineEntity*>(activated_state->fields.m_transition));
        }
    }

    IL2CPP_INTERCEPT_WITH_ORDER(10, void, SwitchSeriesPuzzle, Apply, app::SwitchSeriesPuzzle* this_ptr, app::UberStateApplyContext__Enum context) {
        if (context != app::UberStateApplyContext__Enum::ValueChanged) {
            return;
        }

        const auto activated_state = SwitchSeriesPuzzleSwitchSetupHolder::get_ActivatedState(this_ptr->fields.SetupStates);
        if (activated_state == nullptr) {
            return;
        }

        auto path = il2cpp::unity::get_path(this_ptr);
        if (path == "howlsOriginEntrance/interactives/switchSequencePuzzleA") {
            on_bell_rung(this_ptr, activated_state, core::uber_states::state<"howlsOriginGroup", "bellPuzzleSolved">(), bell_queue_burrows, false);
        } else if (path == "howlsOriginEntrance/interactives/switchSequencePuzzleB") {
            on_bell_rung(this_ptr, activated_state, core::uber_states::state<"howlsOriginGroup", "bellPuzzleBSolved">(), bell_queue_tree, true);
        }
    }

    struct StonePrefab {
        il2cpp::WeakGCRef<app::GameObject> prefab_ref;
        float z;
        float y_offset;
        float rotation_offset = 0.f;
        bool reverse_z_sort = false;

        std::optional<app::GameObject*> instantiate() const {
            const auto prefab_go = *prefab_ref;

            if (!prefab_go.has_value()) {
                return std::nullopt;
            }

            const auto go = il2cpp::unity::instantiate_object<app::GameObject>(*prefab_go);
            // for (auto& renderer: il2cpp::unity::get_components_in_children(go, types::Renderer::get_class(), true)) {
            //     const auto runtime_sort = il2cpp::unity::add_component<app::UberShaderRuntimeRenderOrder>(
            //         il2cpp::unity::get_game_object(renderer),
            //         types::UberShaderRuntimeRenderOrder::get_class()
            //     );
            //     runtime_sort->fields.m_isInScene = true;
            // }

            return go;
        }

        void apply_transform(app::GameObject* go, float x_position, const float rotation) const {
            const auto angle_rad = utils::deg2rad(rotation + rotation_offset);

            app::Vector3 local_position(
                x_position - std::sinf(angle_rad) * y_offset,
                std::cosf(angle_rad) * y_offset,
                z
            );
            il2cpp::unity::set_local_position(go, local_position);
            il2cpp::unity::set_rotation(go, app::Vector3(0, 0, rotation + rotation_offset));

            float z_offset = 0.0;
            for (auto& renderer: il2cpp::unity::get_components_in_children<app::Renderer>(go, types::Renderer::get_class(), true)) {
                UberShaderRenderQueue::SetRenderQueueExplicit_2(renderer, il2cpp::unity::get_position(go).z - 0.5f - z_offset);
                z_offset += reverse_z_sort ? 0.1f : -0.1f;
            }
        }
    };

    template<typename T>
    struct CircularIterator {
        const std::vector<T>& vector;
        std::vector<T>::const_iterator it;

        CircularIterator(const std::vector<T>& vector) : vector(vector) {
            it = vector.begin();
        }

        const T& next() {
            const auto& item = *it;

            ++it;

            if (it == vector.end()) {
                it = vector.begin();
            }

            return item;
        }
    };

    template<typename P>
    struct InstantiatingCachingIterator {
        using I = il2cpp::WeakGCRef<app::GameObject>;

        struct Instance {
            const P& prefab;
            I ref;
        };

        std::vector<Instance>& vector;
        std::vector<Instance>::const_iterator it;
        CircularIterator<P> iterator;

        InstantiatingCachingIterator(std::vector<Instance>& vector, CircularIterator<P> iterator) : vector(vector), iterator(std::move(iterator)) {
            it = vector.begin();

            for (int i = 0; i < vector.size(); ++i) {
                this->iterator.next();
            }
        }

        const Instance& next() {
            if (it == vector.end()) {
                const auto& prefab = iterator.next();
                vector.emplace_back(Instance(prefab, il2cpp::WeakGCRef(*prefab.instantiate())));
                it = vector.end() - 1;
            }

            const auto& item = *it;
            ++it;

            return item;
        }
    };

    std::unordered_map<Bell, std::vector<StonePrefab>> stone_prefabs_by_bell;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> stones_anchor_ref;
    std::unordered_map<Bell, std::vector<InstantiatingCachingIterator<StonePrefab>::Instance>> stone_instance_refs;
    core::reactivity::ReactiveEffect::ptr_t stone_update_effect;

    [[maybe_unused]]
    auto on_scene_loaded = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("howlsOriginEntrance", [](const auto& event) {
        if (event.state != app::SceneState__Enum::Enabled) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);
        const auto stones_parent_parent_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "art",
                "flattened",
                "hugeCell",
                "background",
                "Shrine",
                "shrineEntranceBase",
                "mountHoruGroundFortBss",
                "hintRockSupport",
            }
        );

        const auto stones_parent_go = il2cpp::unity::find_child(stones_parent_parent_go, "hintRocksArrangement");

        if (!stones_anchor_ref.has_value() || !stones_anchor_ref->is_valid()) {
            const auto stones_anchor_go = types::GameObject::create();
            UnityEngine::GameObject::ctor_1(stones_anchor_go, il2cpp::string_new("Stones"));
            stones_anchor_ref = il2cpp::WeakGCRef(stones_anchor_go);
            il2cpp::unity::set_parent(stones_anchor_go, stones_parent_parent_go);
            il2cpp::unity::set_position(stones_anchor_go, STONE_ANCHOR_POSITION);
        }

        stone_prefabs_by_bell.clear();
        stone_instance_refs.clear();


        app::GameObject* stone_go = il2cpp::unity::find_child(stones_parent_go, "shrineBaseRockCircleAs");

        const auto fog_vignette_mask_gos = il2cpp::unity::find_children(
            scene_root_go,
            std::vector<std::string>{
                "art",
                "flattened",
                "hugeCell",
                "effects_0_33",
                "fogs",
                "vignetteMaskC",
            }
        );
        il2cpp::unity::set_parent(fog_vignette_mask_gos[1], stone_go);

        stone_prefabs_by_bell[Bell::Center].emplace_back(
            il2cpp::WeakGCRef(stone_go),
            4.7f,
            1.9f
        );

        stone_go = il2cpp::unity::find_child(stones_parent_go, "shrineBaseRockE");
        stone_prefabs_by_bell[Bell::Left].emplace_back(
            il2cpp::WeakGCRef(stone_go),
            5.4f,
            6.f
        );

        stone_go = il2cpp::unity::find_child(stones_parent_go, "shrineBaseRockF");
        stone_prefabs_by_bell[Bell::Center].emplace_back(
            il2cpp::WeakGCRef(stone_go),
            5.2f,
            1.5f
        );

        // There are two "shrineBaseRockDs", the second one contains two stones split up in 3 game objects (oriDizzy)
        // The first "shrineBaseRockDs" is a normal stone, so add it just like the others
        const auto bells_d = il2cpp::unity::find_children(stones_parent_go, "shrineBaseRockDs");
        stone_prefabs_by_bell[Bell::Right].emplace_back(
            il2cpp::WeakGCRef(bells_d[0]),
            5.2f,
            3.9f
        );

        // Add the not split-up stone
        stone_go = il2cpp::unity::find_child(bells_d[1], "shrineBaseRockC");
        stone_prefabs_by_bell[Bell::Left].emplace_back(
            il2cpp::WeakGCRef(stone_go),
            6.f,
            7.f,
            -14.f
        );

        // Now first merge the game objects of the split-up stone together...
        stone_go = il2cpp::unity::find_child(bells_d[1], "shrineBaseRockI");
        il2cpp::unity::set_parent(
            il2cpp::unity::find_child(bells_d[1], "shrineBaseRockO"),
            stone_go
        );
        stone_prefabs_by_bell[Bell::Left].emplace_back(
            il2cpp::WeakGCRef(stone_go),
            5.2f,
            5.f,
            -10.f,
            true
        );

        stone_go = il2cpp::unity::find_child(stones_parent_go, "shrineBaseRockD");
        stone_prefabs_by_bell[Bell::Right].emplace_back(
            il2cpp::WeakGCRef(stone_go),
            5.f,
            4.f,
            -6.f
        );

        il2cpp::unity::set_active(stones_parent_go, false);

        stone_update_effect = core::reactivity::watch_effect()
            .before([] {
                for (auto& instances: stone_instance_refs | std::views::values) {
                    for (auto& instance : instances) {
                        const auto go = *instance.ref;
                        if (!go.has_value()) {
                            continue;
                        }
                        il2cpp::unity::set_active(*go, false);
                    }
                }
            })
            .effect([] {
                desired_sequence.clear();
                for (int i = 0; i < MAX_BELL_SEQUENCE_LENGTH; ++i) {
                    const auto bell = get_bell_for_stone_index(i);

                    if (!bell.has_value()) {
                        goto after_loop;
                    }

                    switch (*bell) {
                        case Bell::Left:
                            desired_sequence.emplace_back(Bell::Left);
                            break;
                        case Bell::Center:
                            desired_sequence.emplace_back(Bell::Center);
                            break;
                        case Bell::Right:
                            desired_sequence.emplace_back(Bell::Right);
                            break;
                        default:
                            goto after_loop;
                    }
                }
                after_loop:

                core::reactivity::run_after_effects([] {
                    float x_position = desired_sequence.size() / -2.f * STONE_GAP;
                    const auto stones_anchor_go = il2cpp::deref_weak_gc_ref(stones_anchor_ref);

                    if (!stones_anchor_go.has_value()) {
                        return;
                    }

                    std::unordered_map<Bell, InstantiatingCachingIterator<StonePrefab>> stone_instantiators;
                    for (auto& [bell, prefabs]: stone_prefabs_by_bell) {
                        stone_instantiators.emplace(bell, InstantiatingCachingIterator(stone_instance_refs[bell], CircularIterator(prefabs)));
                    }

                    for (auto& bell: desired_sequence) {
                        const auto instance = stone_instantiators.at(bell).next();
                        const auto instance_go = *instance.ref;

                        if (!instance_go.has_value()) {
                            continue;
                        }

                        instance.prefab.apply_transform(*instance_go, x_position, x_position * -STONE_ANGLE_PER_UNIT);
                        il2cpp::unity::set_parent(*instance_go, *stones_anchor_go, true);
                        il2cpp::unity::set_active(*instance_go, true);

                        x_position += STONE_GAP;
                    }
                });
            })
            .trigger_on_load()
            .finalize();
    });
} // namespace
