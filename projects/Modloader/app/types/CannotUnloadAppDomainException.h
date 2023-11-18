#pragma once
#include <Modloader/app/structs/CannotUnloadAppDomainException.h>
#include <Modloader/app/structs/CannotUnloadAppDomainException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CannotUnloadAppDomainException {
        inline app::CannotUnloadAppDomainException__Class** type_info() {
            static app::CannotUnloadAppDomainException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CannotUnloadAppDomainException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CannotUnloadAppDomainException__Class* get_class() {
            return il2cpp::get_class<app::CannotUnloadAppDomainException__Class>(type_info(), "System", "CannotUnloadAppDomainException");
        }
        inline app::CannotUnloadAppDomainException* create() {
            return il2cpp::create_object<app::CannotUnloadAppDomainException>(get_class());
        }
    } // namespace CannotUnloadAppDomainException
} // namespace app::classes::types
