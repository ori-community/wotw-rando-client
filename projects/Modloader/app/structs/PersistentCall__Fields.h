#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PersistentCall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PersistentCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentCall__Fields_DEFINED)
#include <Modloader/app/structs/PersistentListenerMode__Enum.h>
#include <Modloader/app/structs/UnityEventCallState__Enum.h>
#if defined(IL2CPP_STRUCT_PersistentListenerMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_UnityEventCallState__Enum_DEFINED)
#define IL2CPP_STRUCT_PersistentCall__Fields_DEFINED
struct Object_1;
struct String;
struct ArgumentCache;
struct __declspec(align(8)) PersistentCall__Fields {
    struct Object_1* m_Target;
    struct String* m_MethodName;
    PersistentListenerMode__Enum m_Mode;

    struct ArgumentCache* m_Arguments;
    UnityEventCallState__Enum m_CallState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PersistentCall__Fields_FWDDECL)
#define IL2CPP_STRUCT_PersistentCall__Fields_FWDDECL
#include <Modloader/app/structs/ArgumentCache.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PersistentCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentCall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PersistentCall__Fields_FWDDECL)
#include <Modloader/app/structs/PersistentCall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PersistentCall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
