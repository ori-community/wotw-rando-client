#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateGroupDataItemView {
        inline app::UberStateGroupDataItemView__Class** type_info = (app::UberStateGroupDataItemView__Class**)(modloader::win::memory::resolve_rva(0x04751588));
        inline app::UberStateGroupDataItemView__Class* get_class() {
            return il2cpp::get_class<app::UberStateGroupDataItemView__Class>(type_info, "Moon.UberStateVisualization", "UberStateGroupDataItemView");
        }
        inline app::UberStateGroupDataItemView* create() {
            return il2cpp::create_object<app::UberStateGroupDataItemView>(get_class());
        }
    } // namespace UberStateGroupDataItemView
} // namespace app::classes::types
