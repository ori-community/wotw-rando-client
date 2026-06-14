#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeSerializationManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeSerializationManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSerializationManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeSerializationManager__Fields_DEFINED
struct IList_1_System_Object_;
struct SerializationInfo;
struct Object;
struct RuntimeType;
struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_;
struct __declspec(align(8)) SafeSerializationManager__Fields {
    struct IList_1_System_Object_* m_serializedStates;
    struct SerializationInfo* m_savedSerializationInfo;
    struct Object* m_realObject;
    struct RuntimeType* m_realType;
    struct EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_* SerializeObjectState;
};
#endif
#if !defined(IL2CPP_STRUCT_SafeSerializationManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_SafeSerializationManager__Fields_FWDDECL
#include <Modloader/app/structs/EventHandler_1_System_Runtime_Serialization_SafeSerializationEventArgs_.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/SerializationInfo.h>
#endif
#undef IL2CPP_STRUCT_SafeSerializationManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSerializationManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SafeSerializationManager__Fields_FWDDECL)
#include <Modloader/app/structs/SafeSerializationManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeSerializationManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
