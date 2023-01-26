#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/HybridReferenceDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Object_.h>

namespace app::classes::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02545B40, app::Object*, get_Item, (app::HybridReferenceDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02545C40, void, set_Item, (app::HybridReferenceDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x025457C0, bool, TryGetValue, (app::HybridReferenceDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x02545870, void, Remove, (app::HybridReferenceDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02545910, bool, ContainsKey, (app::HybridReferenceDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02545990, app::IEnumerator_1_KeyValuePair_2_System_Object_System_Object_*, GetEnumerator, (app::HybridReferenceDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02545A20, app::IEnumerator_1_KeyValuePair_2_System_Object_System_Object_*, GetEnumeratorWorker, (app::HybridReferenceDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::HybridReferenceDictionary_2_System_Object_System_Object_ * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2_System_Object_System_Object_
