#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FFTWindow__Enum__Class.h>
#include <Modloader/app/structs/FFTWindow__Enum.h>

namespace app::classes::types {
    namespace FFTWindow__Enum {
        namespace {
            inline app::FFTWindow__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FFTWindow__Enum__Class** type_info = &type_info_ref;
        inline app::FFTWindow__Enum__Class* get_class() {
            return il2cpp::get_class<app::FFTWindow__Enum__Class>(type_info, "UnityEngine", "FFTWindow");
        }
        inline app::FFTWindow__Enum* create() {
            return il2cpp::create_object<app::FFTWindow__Enum>(get_class());
        }
    } // namespace FFTWindow__Enum
} // namespace app::classes::types
