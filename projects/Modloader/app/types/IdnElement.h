#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IdnElement__Class.h>
#include <Modloader/app/structs/IdnElement.h>

namespace app::classes::types {
    namespace IdnElement {
        namespace {
            inline app::IdnElement__Class* type_info_ref = nullptr;
        }
        inline app::IdnElement__Class** type_info = &type_info_ref;
        inline app::IdnElement__Class* get_class() {
            return il2cpp::get_class<app::IdnElement__Class>(type_info, "System.Configuration", "IdnElement");
        }
        inline app::IdnElement* create() {
            return il2cpp::create_object<app::IdnElement>(get_class());
        }
    } // namespace IdnElement
} // namespace app::classes::types
