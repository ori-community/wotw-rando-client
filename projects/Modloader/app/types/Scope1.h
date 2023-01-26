#pragma once
#include <Modloader/app/structs/Scope1.h>
#include <Modloader/app/structs/Scope1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Scope1 {
        inline app::Scope1__Class** type_info() {
            static app::Scope1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Scope1__Class**)(modloader::win::memory::resolve_rva(0x04746348));
            }
            return cache;
        }
        inline app::Scope1__Class* get_class() {
            return il2cpp::get_class<app::Scope1__Class>(type_info(), "System.Linq.Expressions", "Scope1");
        }
        inline app::Scope1* create() {
            return il2cpp::create_object<app::Scope1>(get_class());
        }
    } // namespace Scope1
} // namespace app::classes::types
