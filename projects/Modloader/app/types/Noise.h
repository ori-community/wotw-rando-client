#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Noise__Class.h>
#include <Modloader/app/structs/Noise.h>

namespace app::classes::types {
    namespace Noise {
        namespace {
            inline app::Noise__Class* type_info_ref = nullptr;
        }
        inline app::Noise__Class** type_info = &type_info_ref;
        inline app::Noise__Class* get_class() {
            return il2cpp::get_class<app::Noise__Class>(type_info, "Colorful", "Noise");
        }
        inline app::Noise* create() {
            return il2cpp::create_object<app::Noise>(get_class());
        }
    } // namespace Noise
} // namespace app::classes::types
