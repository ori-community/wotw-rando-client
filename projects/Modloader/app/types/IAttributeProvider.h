#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAttributeProvider__Class.h>

namespace app::classes::types {
    namespace IAttributeProvider {
        namespace {
            inline app::IAttributeProvider__Class* type_info_ref = nullptr;
        }
        inline app::IAttributeProvider__Class** type_info = &type_info_ref;
        inline app::IAttributeProvider__Class* get_class() {
            return il2cpp::get_class<app::IAttributeProvider__Class>(type_info, "Newtonsoft.Json.Serialization", "IAttributeProvider");
        }
    } // namespace IAttributeProvider
} // namespace app::classes::types
