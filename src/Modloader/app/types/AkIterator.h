#pragma once
#include <Modloader/app/structs/AkIterator.h>
#include <Modloader/app/structs/AkIterator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkIterator {
        inline app::AkIterator__Class** type_info() {
            static app::AkIterator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkIterator__Class**)(modloader::win::memory::resolve_rva(0x04705A80));
            }
            return cache;
        }
        inline app::AkIterator__Class* get_class() {
            return il2cpp::get_class<app::AkIterator__Class>(type_info(), "", "AkIterator");
        }
        inline app::AkIterator* create() {
            return il2cpp::create_object<app::AkIterator>(get_class());
        }
    } // namespace AkIterator
} // namespace app::classes::types
