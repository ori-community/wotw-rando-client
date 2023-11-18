#pragma once
#include <Modloader/app/structs/SoundComposition_SoundLoop.h>
#include <Modloader/app/structs/SoundComposition_SoundLoop__Array.h>
#include <Modloader/app/structs/SoundComposition_SoundLoop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundComposition_SoundLoop {
        inline app::SoundComposition_SoundLoop__Class** type_info() {
            static app::SoundComposition_SoundLoop__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundComposition_SoundLoop__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundComposition_SoundLoop__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundComposition_SoundLoop__Class>(type_info(), "", "SoundComposition", "SoundLoop");
        }
        inline app::SoundComposition_SoundLoop* create() {
            return il2cpp::create_object<app::SoundComposition_SoundLoop>(get_class());
        }
        inline app::SoundComposition_SoundLoop__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundComposition_SoundLoop__Array>(get_class(), size);
        }
        inline app::SoundComposition_SoundLoop__Array* create_array(const std::vector<app::SoundComposition_SoundLoop*>& items) {
            return il2cpp::array_new<app::SoundComposition_SoundLoop__Array>(get_class(), items);
        }
    } // namespace SoundComposition_SoundLoop
} // namespace app::classes::types
