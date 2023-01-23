#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocalVariableInfo__Class.h>
#include <Modloader/app/structs/LocalVariableInfo.h>
#include <Modloader/app/structs/LocalVariableInfo__Array.h>

namespace app::classes::types {
    namespace LocalVariableInfo {
        namespace {
            inline app::LocalVariableInfo__Class* type_info_ref = nullptr;
        }
        inline app::LocalVariableInfo__Class** type_info = &type_info_ref;
        inline app::LocalVariableInfo__Class* get_class() {
            return il2cpp::get_class<app::LocalVariableInfo__Class>(type_info, "System.Reflection", "LocalVariableInfo");
        }
        inline app::LocalVariableInfo* create() {
            return il2cpp::create_object<app::LocalVariableInfo>(get_class());
        }
        inline app::LocalVariableInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalVariableInfo__Array>(get_class(), size);
        }
        inline app::LocalVariableInfo__Array* create_array(const std::vector<app::LocalVariableInfo*>& items) {
            return il2cpp::array_new<app::LocalVariableInfo__Array>(get_class(), items);
        }
    } // namespace LocalVariableInfo
} // namespace app::classes::types
