#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NegativeScaleFixer_TransformAndWorldMatrix {
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Class** type_info = (app::NegativeScaleFixer_TransformAndWorldMatrix__Class**)(modloader::win::memory::resolve_rva(0x0470CD70));
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Class* get_class() {
            return il2cpp::get_nested_class<app::NegativeScaleFixer_TransformAndWorldMatrix__Class>(type_info, "", "NegativeScaleFixer", "TransformAndWorldMatrix");
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix* create() {
            return il2cpp::create_object<app::NegativeScaleFixer_TransformAndWorldMatrix>(get_class());
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array* create_array(int size) {
            return il2cpp::array_new<app::NegativeScaleFixer_TransformAndWorldMatrix__Array>(get_class(), size);
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array* create_array(const std::vector<app::NegativeScaleFixer_TransformAndWorldMatrix*>& items) {
            return il2cpp::array_new<app::NegativeScaleFixer_TransformAndWorldMatrix__Array>(get_class(), items);
        }
    } // namespace NegativeScaleFixer_TransformAndWorldMatrix
} // namespace app::classes::types
