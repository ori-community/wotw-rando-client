#pragma once
#include <Modloader/app/structs/XAsyncBlockPtr.h>
#include <Modloader/app/structs/XAsyncBlockPtr__Boxed.h>
#include <Modloader/app/structs/XAsyncBlockPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XAsyncBlockPtr {
        inline app::XAsyncBlockPtr__Class** type_info() {
            static app::XAsyncBlockPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XAsyncBlockPtr__Class**)(modloader::win::memory::resolve_rva(0x04750C68));
            }
            return cache;
        }
        inline app::XAsyncBlockPtr__Class* get_class() {
            return il2cpp::get_class<app::XAsyncBlockPtr__Class>(type_info(), "XGamingRuntime.Interop", "XAsyncBlockPtr");
        }
        inline app::XAsyncBlockPtr* create() {
            return il2cpp::create_object<app::XAsyncBlockPtr>(get_class());
        }
        inline app::XAsyncBlockPtr__Boxed* box(app::XAsyncBlockPtr value) {
            return il2cpp::box_value<app::XAsyncBlockPtr__Boxed>(get_class(), value);
        }
    } // namespace XAsyncBlockPtr
} // namespace app::classes::types
