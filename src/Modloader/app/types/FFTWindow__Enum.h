#pragma once
#include <Modloader/app/structs/FFTWindow__Enum.h>
#include <Modloader/app/structs/FFTWindow__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FFTWindow__Enum {
        inline app::FFTWindow__Enum__Class** type_info() {
            static app::FFTWindow__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FFTWindow__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FFTWindow__Enum__Class* get_class() {
            return il2cpp::get_class<app::FFTWindow__Enum__Class>(type_info(), "UnityEngine", "FFTWindow");
        }
        inline app::FFTWindow__Enum* create() {
            return il2cpp::create_object<app::FFTWindow__Enum>(get_class());
        }
    } // namespace FFTWindow__Enum
} // namespace app::classes::types
