#pragma once
#include <Modloader/app/structs/WwiseObjectType__Enum.h>
#include <Modloader/app/structs/WwiseObjectType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseObjectType__Enum {
        inline app::WwiseObjectType__Enum__Class** type_info() {
            static app::WwiseObjectType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseObjectType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04739B80));
            }
            return cache;
        }
        inline app::WwiseObjectType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WwiseObjectType__Enum__Class>(type_info(), "", "WwiseObjectType");
        }
        inline app::WwiseObjectType__Enum* create() {
            return il2cpp::create_object<app::WwiseObjectType__Enum>(get_class());
        }
    } // namespace WwiseObjectType__Enum
} // namespace app::classes::types
