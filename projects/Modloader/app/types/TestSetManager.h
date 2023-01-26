#pragma once
#include <Modloader/app/structs/TestSetManager.h>
#include <Modloader/app/structs/TestSetManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestSetManager {
        inline app::TestSetManager__Class** type_info() {
            static app::TestSetManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TestSetManager__Class**)(modloader::win::memory::resolve_rva(0x047646C8));
            }
            return cache;
        }
        inline app::TestSetManager__Class* get_class() {
            return il2cpp::get_class<app::TestSetManager__Class>(type_info(), "", "TestSetManager");
        }
        inline app::TestSetManager* create() {
            return il2cpp::create_object<app::TestSetManager>(get_class());
        }
    } // namespace TestSetManager
} // namespace app::classes::types
