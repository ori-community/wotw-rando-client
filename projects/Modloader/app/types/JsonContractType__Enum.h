#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonContractType__Enum__Class.h>
#include <Modloader/app/structs/JsonContractType__Enum.h>

namespace app::classes::types {
    namespace JsonContractType__Enum {
        namespace {
            inline app::JsonContractType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::JsonContractType__Enum__Class** type_info = &type_info_ref;
        inline app::JsonContractType__Enum__Class* get_class() {
            return il2cpp::get_class<app::JsonContractType__Enum__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonContractType");
        }
        inline app::JsonContractType__Enum* create() {
            return il2cpp::create_object<app::JsonContractType__Enum>(get_class());
        }
    } // namespace JsonContractType__Enum
} // namespace app::classes::types
