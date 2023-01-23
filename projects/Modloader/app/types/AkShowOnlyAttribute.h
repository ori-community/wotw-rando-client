#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkShowOnlyAttribute__Class.h>
#include <Modloader/app/structs/AkShowOnlyAttribute.h>

namespace app::classes::types {
    namespace AkShowOnlyAttribute {
        namespace {
            inline app::AkShowOnlyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AkShowOnlyAttribute__Class** type_info = &type_info_ref;
        inline app::AkShowOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::AkShowOnlyAttribute__Class>(type_info, "", "AkShowOnlyAttribute");
        }
        inline app::AkShowOnlyAttribute* create() {
            return il2cpp::create_object<app::AkShowOnlyAttribute>(get_class());
        }
    } // namespace AkShowOnlyAttribute
} // namespace app::classes::types
