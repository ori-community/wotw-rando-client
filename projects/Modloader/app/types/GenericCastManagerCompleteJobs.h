#pragma once
#include <Modloader/app/structs/GenericCastManagerCompleteJobs.h>
#include <Modloader/app/structs/GenericCastManagerCompleteJobs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericCastManagerCompleteJobs {
        inline app::GenericCastManagerCompleteJobs__Class** type_info() {
            static app::GenericCastManagerCompleteJobs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericCastManagerCompleteJobs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericCastManagerCompleteJobs__Class* get_class() {
            return il2cpp::get_class<app::GenericCastManagerCompleteJobs__Class>(type_info(), "", "GenericCastManagerCompleteJobs");
        }
        inline app::GenericCastManagerCompleteJobs* create() {
            return il2cpp::create_object<app::GenericCastManagerCompleteJobs>(get_class());
        }
    } // namespace GenericCastManagerCompleteJobs
} // namespace app::classes::types
