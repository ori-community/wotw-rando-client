#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectGetArgs__Class.h>
#include <Modloader/app/structs/ObjectGetArgs.h>

namespace app::classes::types {
    namespace ObjectGetArgs {
        namespace {
            inline app::ObjectGetArgs__Class* type_info_ref = nullptr;
        }
        inline app::ObjectGetArgs__Class** type_info = &type_info_ref;
        inline app::ObjectGetArgs__Class* get_class() {
            return il2cpp::get_class<app::ObjectGetArgs__Class>(type_info, "", "ObjectGetArgs");
        }
        inline app::ObjectGetArgs* create() {
            return il2cpp::create_object<app::ObjectGetArgs>(get_class());
        }
    } // namespace ObjectGetArgs
} // namespace app::classes::types
