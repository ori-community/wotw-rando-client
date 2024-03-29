#pragma once
#include <Modloader/app/structs/MonoCustomAttrs.h>
#include <Modloader/app/structs/MonoCustomAttrs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoCustomAttrs {
        inline app::MonoCustomAttrs__Class** type_info() {
            static app::MonoCustomAttrs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoCustomAttrs__Class**)(modloader::win::memory::resolve_rva(0x04719648));
            }
            return cache;
        }
        inline app::MonoCustomAttrs__Class* get_class() {
            return il2cpp::get_class<app::MonoCustomAttrs__Class>(type_info(), "System", "MonoCustomAttrs");
        }
        inline app::MonoCustomAttrs* create() {
            return il2cpp::create_object<app::MonoCustomAttrs>(get_class());
        }
    } // namespace MonoCustomAttrs
} // namespace app::classes::types
