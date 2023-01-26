#pragma once
#include <Modloader/app/structs/TestSetConfiguration.h>
#include <Modloader/app/structs/TestSetConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestSetConfiguration {
        inline app::TestSetConfiguration__Class** type_info() {
            static app::TestSetConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TestSetConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04790568));
            }
            return cache;
        }
        inline app::TestSetConfiguration__Class* get_class() {
            return il2cpp::get_class<app::TestSetConfiguration__Class>(type_info(), "", "TestSetConfiguration");
        }
        inline app::TestSetConfiguration* create() {
            return il2cpp::create_object<app::TestSetConfiguration>(get_class());
        }
    } // namespace TestSetConfiguration
} // namespace app::classes::types
