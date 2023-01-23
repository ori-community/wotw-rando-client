#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NegativeScaleFixer_TransformAndWorldMatrix__Array__Class.h>
#include <Modloader/app/structs/NegativeScaleFixer_TransformAndWorldMatrix__Array.h>

namespace app::classes::types {
    namespace NegativeScaleFixer_TransformAndWorldMatrix__Array {
        namespace {
            inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class* type_info_ref = nullptr;
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class** type_info = &type_info_ref;
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class* get_class() {
            return il2cpp::get_class<app::NegativeScaleFixer_TransformAndWorldMatrix__Array__Class>(type_info, "", "NegativeScaleFixer+TransformAndWorldMatrix[]");
        }
        inline app::NegativeScaleFixer_TransformAndWorldMatrix__Array* create() {
            return il2cpp::create_object<app::NegativeScaleFixer_TransformAndWorldMatrix__Array>(get_class());
        }
    } // namespace NegativeScaleFixer_TransformAndWorldMatrix__Array
} // namespace app::classes::types
