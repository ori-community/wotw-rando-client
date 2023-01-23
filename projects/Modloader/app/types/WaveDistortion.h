#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaveDistortion__Class.h>
#include <Modloader/app/structs/WaveDistortion.h>

namespace app::classes::types {
    namespace WaveDistortion {
        namespace {
            inline app::WaveDistortion__Class* type_info_ref = nullptr;
        }
        inline app::WaveDistortion__Class** type_info = &type_info_ref;
        inline app::WaveDistortion__Class* get_class() {
            return il2cpp::get_class<app::WaveDistortion__Class>(type_info, "Colorful", "WaveDistortion");
        }
        inline app::WaveDistortion* create() {
            return il2cpp::create_object<app::WaveDistortion>(get_class());
        }
    } // namespace WaveDistortion
} // namespace app::classes::types
