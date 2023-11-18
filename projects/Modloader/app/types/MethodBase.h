#pragma once
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodBase__Array.h>
#include <Modloader/app/structs/MethodBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodBase {
        inline app::MethodBase__Class** type_info() {
            static app::MethodBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodBase__Class**)(modloader::win::memory::resolve_rva(0x047008D0));
            }
            return cache;
        }
        inline app::MethodBase__Class* get_class() {
            return il2cpp::get_class<app::MethodBase__Class>(type_info(), "System.Reflection", "MethodBase");
        }
        inline app::MethodBase* create() {
            return il2cpp::create_object<app::MethodBase>(get_class());
        }
        inline app::MethodBase__Array* create_array(int size) {
            return il2cpp::array_new<app::MethodBase__Array>(get_class(), size);
        }
        inline app::MethodBase__Array* create_array(const std::vector<app::MethodBase*>& items) {
            return il2cpp::array_new<app::MethodBase__Array>(get_class(), items);
        }
    } // namespace MethodBase
} // namespace app::classes::types
