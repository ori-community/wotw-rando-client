#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicMetaObjectBinder__Class.h>
#include <Modloader/app/structs/DynamicMetaObjectBinder.h>

namespace app::classes::types {
    namespace DynamicMetaObjectBinder {
        namespace {
            inline app::DynamicMetaObjectBinder__Class* type_info_ref = nullptr;
        }
        inline app::DynamicMetaObjectBinder__Class** type_info = &type_info_ref;
        inline app::DynamicMetaObjectBinder__Class* get_class() {
            return il2cpp::get_class<app::DynamicMetaObjectBinder__Class>(type_info, "System.Dynamic", "DynamicMetaObjectBinder");
        }
        inline app::DynamicMetaObjectBinder* create() {
            return il2cpp::create_object<app::DynamicMetaObjectBinder>(get_class());
        }
    } // namespace DynamicMetaObjectBinder
} // namespace app::classes::types
