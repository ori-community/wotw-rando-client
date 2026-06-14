#pragma once
#include <Modloader/app/structs/fsPortableReflection.h>
#include <Modloader/app/structs/fsPortableReflection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsPortableReflection {
        inline app::fsPortableReflection__Class** type_info() {
            static app::fsPortableReflection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsPortableReflection__Class**)(modloader::win::memory::resolve_rva(0x0473B5C0));
            }
            return cache;
        }
        inline app::fsPortableReflection__Class* get_class() {
            return il2cpp::get_class<app::fsPortableReflection__Class>(type_info(), "FullSerializer.Internal", "fsPortableReflection");
        }
        inline app::fsPortableReflection* create() {
            return il2cpp::create_object<app::fsPortableReflection>(get_class());
        }
    } // namespace fsPortableReflection
} // namespace app::classes::types
