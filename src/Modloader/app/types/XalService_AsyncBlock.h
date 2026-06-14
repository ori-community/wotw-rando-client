#pragma once
#include <Modloader/app/structs/XalService_AsyncBlock.h>
#include <Modloader/app/structs/XalService_AsyncBlock__Boxed.h>
#include <Modloader/app/structs/XalService_AsyncBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_AsyncBlock {
        inline app::XalService_AsyncBlock__Class** type_info() {
            static app::XalService_AsyncBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalService_AsyncBlock__Class**)(modloader::win::memory::resolve_rva(0x0473CCD8));
            }
            return cache;
        }
        inline app::XalService_AsyncBlock__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_AsyncBlock__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "AsyncBlock");
        }
        inline app::XalService_AsyncBlock* create() {
            return il2cpp::create_object<app::XalService_AsyncBlock>(get_class());
        }
        inline app::XalService_AsyncBlock__Boxed* box(app::XalService_AsyncBlock value) {
            return il2cpp::box_value<app::XalService_AsyncBlock__Boxed>(get_class(), value);
        }
    } // namespace XalService_AsyncBlock
} // namespace app::classes::types
