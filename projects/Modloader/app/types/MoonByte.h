#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonByte__Class.h>
#include <Modloader/app/structs/MoonByte.h>

namespace app::classes::types {
    namespace MoonByte {
        namespace {
            inline app::MoonByte__Class* type_info_ref = nullptr;
        }
        inline app::MoonByte__Class** type_info = &type_info_ref;
        inline app::MoonByte__Class* get_class() {
            return il2cpp::get_class<app::MoonByte__Class>(type_info, "Moon", "MoonByte");
        }
        inline app::MoonByte* create() {
            return il2cpp::create_object<app::MoonByte>(get_class());
        }
    } // namespace MoonByte
} // namespace app::classes::types
