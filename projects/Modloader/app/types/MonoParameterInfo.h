#pragma once
#include <Modloader/app/structs/MonoParameterInfo.h>
#include <Modloader/app/structs/MonoParameterInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoParameterInfo {
        inline app::MonoParameterInfo__Class** type_info() {
            static app::MonoParameterInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoParameterInfo__Class**)(modloader::win::memory::resolve_rva(0x04784B10));
            }
            return cache;
        }
        inline app::MonoParameterInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoParameterInfo__Class>(type_info(), "System.Reflection", "MonoParameterInfo");
        }
        inline app::MonoParameterInfo* create() {
            return il2cpp::create_object<app::MonoParameterInfo>(get_class());
        }
    } // namespace MonoParameterInfo
} // namespace app::classes::types
