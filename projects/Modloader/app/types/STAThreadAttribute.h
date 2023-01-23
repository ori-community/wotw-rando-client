#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/STAThreadAttribute__Class.h>
#include <Modloader/app/structs/STAThreadAttribute.h>

namespace app::classes::types {
    namespace STAThreadAttribute {
        namespace {
            inline app::STAThreadAttribute__Class* type_info_ref = nullptr;
        }
        inline app::STAThreadAttribute__Class** type_info = &type_info_ref;
        inline app::STAThreadAttribute__Class* get_class() {
            return il2cpp::get_class<app::STAThreadAttribute__Class>(type_info, "System", "STAThreadAttribute");
        }
        inline app::STAThreadAttribute* create() {
            return il2cpp::create_object<app::STAThreadAttribute>(get_class());
        }
    } // namespace STAThreadAttribute
} // namespace app::classes::types
