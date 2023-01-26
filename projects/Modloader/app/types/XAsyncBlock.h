#pragma once
#include <Modloader/app/structs/XAsyncBlock.h>
#include <Modloader/app/structs/XAsyncBlock__Boxed.h>
#include <Modloader/app/structs/XAsyncBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XAsyncBlock {
        inline app::XAsyncBlock__Class** type_info() {
            static app::XAsyncBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XAsyncBlock__Class**)(modloader::win::memory::resolve_rva(0x0478C3B8));
            }
            return cache;
        }
        inline app::XAsyncBlock__Class* get_class() {
            return il2cpp::get_class<app::XAsyncBlock__Class>(type_info(), "XGamingRuntime.Interop", "XAsyncBlock");
        }
        inline app::XAsyncBlock* create() {
            return il2cpp::create_object<app::XAsyncBlock>(get_class());
        }
        inline app::XAsyncBlock__Boxed* box(app::XAsyncBlock value) {
            return il2cpp::box_value<app::XAsyncBlock__Boxed>(get_class(), value);
        }
    } // namespace XAsyncBlock
} // namespace app::classes::types
