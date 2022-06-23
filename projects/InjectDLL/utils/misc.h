#pragma once

#include <Il2CppModLoader/app/methods/UnityEngine/Object.h>


using namespace app::methods;

namespace utils {

    template <typename T>
    struct ObjectReference {
        T* ptr = nullptr;
        int object_id = 0;

        bool is_valid() {
            return
                    ptr != nullptr &&
                    il2cpp::unity::is_valid(ptr) &&
                    UnityEngine::Object::GetInstanceID(reinterpret_cast<app::Object_1*>(ptr)) == object_id;
        }

        void set_reference(T* reference_ptr) {
            ptr = reference_ptr;
            object_id = UnityEngine::Object::GetInstanceID(reinterpret_cast<app::Object_1*>(ptr));
        }
    };

    void set_color(app::GameObject* go, app::Color& color, bool first);
}
