#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Reflector__Class.h>
#include <Modloader/app/structs/Reflector.h>

namespace app::classes::types {
    namespace Reflector {
        namespace {
            inline app::Reflector__Class* type_info_ref = nullptr;
        }
        inline app::Reflector__Class** type_info = &type_info_ref;
        inline app::Reflector__Class* get_class() {
            return il2cpp::get_class<app::Reflector__Class>(type_info, "", "Reflector");
        }
        inline app::Reflector* create() {
            return il2cpp::create_object<app::Reflector>(get_class());
        }
    } // namespace Reflector
} // namespace app::classes::types
