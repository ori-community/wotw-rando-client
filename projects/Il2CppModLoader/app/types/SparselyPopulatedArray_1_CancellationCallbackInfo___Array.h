#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SparselyPopulatedArray_1_CancellationCallbackInfo___Array {
        inline app::SparselyPopulatedArray_1_CancellationCallbackInfo___Array__Class** type_info = (app::SparselyPopulatedArray_1_CancellationCallbackInfo___Array__Class**)(modloader::win::memory::resolve_rva(0x04767048));
        inline app::SparselyPopulatedArray_1_CancellationCallbackInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::SparselyPopulatedArray_1_CancellationCallbackInfo___Array__Class>(type_info, "System.Threading", "SparselyPopulatedArray`1[CancellationCallbackInfo][]");
        }
        inline app::SparselyPopulatedArray_1_CancellationCallbackInfo___Array* create() {
            return il2cpp::create_object<app::SparselyPopulatedArray_1_CancellationCallbackInfo___Array>(get_class());
        }
    } // namespace SparselyPopulatedArray_1_CancellationCallbackInfo___Array
} // namespace app::classes::types
