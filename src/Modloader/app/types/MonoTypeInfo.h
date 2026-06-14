#pragma once
#include <Modloader/app/structs/MonoTypeInfo.h>
#include <Modloader/app/structs/MonoTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoTypeInfo {
        inline app::MonoTypeInfo__Class** type_info() {
            static app::MonoTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0473D1D0));
            }
            return cache;
        }
        inline app::MonoTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoTypeInfo__Class>(type_info(), "System", "MonoTypeInfo");
        }
        inline app::MonoTypeInfo* create() {
            return il2cpp::create_object<app::MonoTypeInfo>(get_class());
        }
    } // namespace MonoTypeInfo
} // namespace app::classes::types
