#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Bootstring__Class.h>
#include <Modloader/app/structs/Bootstring.h>

namespace app::classes::types {
    namespace Bootstring {
        namespace {
            inline app::Bootstring__Class* type_info_ref = nullptr;
        }
        inline app::Bootstring__Class** type_info = &type_info_ref;
        inline app::Bootstring__Class* get_class() {
            return il2cpp::get_class<app::Bootstring__Class>(type_info, "System.Globalization", "Bootstring");
        }
        inline app::Bootstring* create() {
            return il2cpp::create_object<app::Bootstring>(get_class());
        }
    } // namespace Bootstring
} // namespace app::classes::types
