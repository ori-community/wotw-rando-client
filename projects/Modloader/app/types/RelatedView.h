#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RelatedView__Class.h>
#include <Modloader/app/structs/RelatedView.h>

namespace app::classes::types {
    namespace RelatedView {
        inline app::RelatedView__Class** type_info = (app::RelatedView__Class**)(modloader::win::memory::resolve_rva(0x04762F20));
        inline app::RelatedView__Class* get_class() {
            return il2cpp::get_class<app::RelatedView__Class>(type_info, "System.Data", "RelatedView");
        }
        inline app::RelatedView* create() {
            return il2cpp::create_object<app::RelatedView>(get_class());
        }
    } // namespace RelatedView
} // namespace app::classes::types
