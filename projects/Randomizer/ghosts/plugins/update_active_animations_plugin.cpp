#include <Common/ext.h>
#include <Modloader/app/methods/GenericPuppet.h>
#include <Modloader/app/methods/Moon/ActiveAnimationHandle.h>
#include <Modloader/app/methods/GenericPuppet.h>
#include <Modloader/app/methods/GhostPlayer.h>
#include <Modloader/app/methods/Moon/MoonAnimator.h>
#include <Modloader/app/methods/System/Collections/Generic/HashSet_1_GenericPuppet_.h>
#include <Modloader/app/types/MoonAnimator_ActiveAnimation.h>
#include <Modloader/app/types/ActiveAnimationHandle.h>
#include <Modloader/app/types/GenericPuppet.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/windows_api/console.h>

#include <Randomizer/ghosts.h>
#include <random>

#include "update_active_animations_plugin.h"

using namespace modloader::win::console;
using namespace app::classes;
using ActiveAnimation = ghosts::RandoGhost::ActiveAnimation;

namespace ghosts::plugins {
    std::random_device random_device;
    std::mt19937 rng(random_device());
    auto record_interval_frames_range = std::uniform_int_distribution(60, 240);

    int frames_until_record = record_interval_frames_range.max();

    std::vector<ActiveAnimation> get_active_animations(app::GenericPuppet* generic_puppet) {
        std::vector<ActiveAnimation> active_animations;

        for (int i = 0; i < generic_puppet->fields.m_activeAnimations->fields._size; ++i) {
            auto animation_handle = generic_puppet->fields.m_activeAnimations->fields._items->vector[i];

            auto index = -1;
            il2cpp::invoke<app::Int32__Boxed>(generic_puppet->fields.m_activeAnimationIndexMap, "TryGetValue", &animation_handle, &index);

            auto animation = Moon::ActiveAnimationHandle::get_Animation(
                types::ActiveAnimationHandle::box(animation_handle)
            );
            auto attribute = GenericPuppet::GetGhostGenericResourceAttributeForFieldWithValue(
                    generic_puppet,
                    reinterpret_cast<app::Object*>(animation)
            );

            if (attribute != nullptr) {
                auto priority = 0;

                if (il2cpp::is_assignable(animation_handle.m_activeAnimation, reinterpret_cast<Il2CppClass*>(types::MoonAnimator_ActiveAnimation::get_class()))) {
                    auto active_animation = reinterpret_cast<app::MoonAnimator_ActiveAnimation*>(animation_handle.m_activeAnimation);
                    priority = active_animation->fields.m_priority;
                }

                active_animations.emplace_back(ActiveAnimation {
                        attribute->fields.m_id,
                        index,
                        priority,
                });
            }
        }

        return active_animations;
    }

    std::vector<std::byte> UpdateActiveAnimationsPlugin::record(app::GhostRecorder* recorder) {
        if (--frames_until_record <= 0) {
            std::unordered_map<int, std::vector<ActiveAnimation>> active_animations_map;

            auto puppets = types::GenericPuppet::create_array(recorder->klass->static_fields->s_puppets->fields._count);
            il2cpp::invoke(recorder->klass->static_fields->s_puppets, "CopyTo", puppets);

            for (int i = 0; i < puppets->max_length; ++i) {
                auto generic_puppet = puppets->vector[i];
                auto active_animations = get_active_animations(generic_puppet);

                if (!active_animations.empty()) {
                    auto puppet_id = il2cpp::invoke<app::Int32__Boxed>(generic_puppet, "get_Id")->fields;
                    active_animations_map[puppet_id] = active_animations;
                }
            }

            frames_until_record = record_interval_frames_range(rng);

            if (!active_animations_map.empty()) {
                utils::ByteStream stream;

                stream.write<int>(static_cast<int>(active_animations_map.size()));

                for (const auto& active_animations : active_animations_map) {
                    stream.write<int>(active_animations.first); // Puppet ID
                    stream.write<int>(static_cast<int>(active_animations.second.size()));

                    for (const auto& active_animation : active_animations.second) {
                        stream.write<ActiveAnimation>(active_animation);
                    }
                }

                return stream.buffer;
            }
        }

        return {};
    }

    void UpdateActiveAnimationsPlugin::play(utils::ByteStream& stream, RandoGhost& ghost) {
        auto puppets_count = stream.read<int>();

        std::unordered_map<int, std::unordered_map<int, ActiveAnimation>> desired_active_animations_map;
        //                 ^ Puppet ID             ^ Resource ID

        // Read desired active animations
        for (int i = 0; i < puppets_count; ++i) {
            auto puppet_id = stream.read<int>();
            auto animation_count = stream.read<int>();

            for (int j = 0; j < animation_count; ++j) {
                auto active_animation = stream.read<ActiveAnimation>();
                desired_active_animations_map[puppet_id][active_animation.resource_id] = active_animation;
            }
        }

        // Iterate all puppets
        if (desired_active_animations_map.empty()) {
            return;
        }

        for (int i = 0; i < ghost.ghost_player->fields.m_puppets->fields.count; ++i) {
            auto puppet_id = ghost.ghost_player->fields.m_puppets->fields.entries->vector[i].key;
            auto puppet = ghost.ghost_player->fields.m_puppets->fields.entries->vector[i].value;
            auto current_active_animations = ghost.active_animations[puppet_id];

            // Sync state
            for (const auto& item : current_active_animations) {
                if (!desired_active_animations_map[puppet_id].contains(item.first)) {
                    GenericPuppet::EndAnimationById(reinterpret_cast<app::GenericPuppet*>(puppet), item.second.resource_id, item.second.index);
                }
            }

            for (const auto& item : desired_active_animations_map[puppet_id]) {
                if (!current_active_animations.contains(item.first)) {
                    GenericPuppet::StartAnimationById(reinterpret_cast<app::GenericPuppet*>(puppet), item.second.resource_id, item.second.index, item.second.priority);
                }
            }
        }
    }
} // namespace ghosts::plugins