#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereArrayIterator_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x02894030, void, ctor, (app::Enumerable_WhereArrayIterator_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::SceneLoadingQueue_QueueSceneToLoad__Array * source, app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x02894080, app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_ *, Clone, (app::Enumerable_WhereArrayIterator_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298BCB0, bool, MoveNext, (app::Enumerable_WhereArrayIterator_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298BDC0, app::IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad_ *, Where, (app::Enumerable_WhereArrayIterator_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ * predicate))
}
