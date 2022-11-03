#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsPortableReflection {
        inline app::fsPortableReflection__Class** type_info = (app::fsPortableReflection__Class**)(modloader::win::memory::resolve_rva(0x0473B5C0));
        inline app::fsPortableReflection__Class* get_class() {
            return il2cpp::get_class<app::fsPortableReflection__Class>(type_info, "FullSerializer.Internal", "fsPortableReflection");
        }
        inline app::fsPortableReflection* create() {
            return il2cpp::create_object<app::fsPortableReflection>(get_class());
        }
    } // namespace fsPortableReflection
} // namespace app::classes::types
