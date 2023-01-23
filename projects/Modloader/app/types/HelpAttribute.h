#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HelpAttribute__Class.h>
#include <Modloader/app/structs/HelpAttribute.h>

namespace app::classes::types {
    namespace HelpAttribute {
        namespace {
            inline app::HelpAttribute__Class* type_info_ref = nullptr;
        }
        inline app::HelpAttribute__Class** type_info = &type_info_ref;
        inline app::HelpAttribute__Class* get_class() {
            return il2cpp::get_class<app::HelpAttribute__Class>(type_info, "Moon.Attributes", "HelpAttribute");
        }
        inline app::HelpAttribute* create() {
            return il2cpp::create_object<app::HelpAttribute>(get_class());
        }
    } // namespace HelpAttribute
} // namespace app::classes::types
