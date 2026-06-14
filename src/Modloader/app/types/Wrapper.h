#pragma once
#include <Modloader/app/structs/Wrapper.h>
#include <Modloader/app/structs/Wrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Wrapper {
        inline app::Wrapper__Class** type_info() {
            static app::Wrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Wrapper__Class**)(modloader::win::memory::resolve_rva(0x047584C8));
            }
            return cache;
        }
        inline app::Wrapper__Class* get_class() {
            return il2cpp::get_class<app::Wrapper__Class>(type_info(), "Grdk", "Wrapper");
        }
        inline app::Wrapper* create() {
            return il2cpp::create_object<app::Wrapper>(get_class());
        }
    } // namespace Wrapper
} // namespace app::classes::types
