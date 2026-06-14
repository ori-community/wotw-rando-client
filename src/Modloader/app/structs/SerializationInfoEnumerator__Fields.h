#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_DEFINED
struct String__Array;
struct Object__Array;
struct Type__Array;
struct __declspec(align(8)) SerializationInfoEnumerator__Fields {
    struct String__Array* m_members;
    struct Object__Array* m_data;
    struct Type__Array* m_types;
    int32_t m_numItems;
    int32_t m_currItem;
    bool m_current;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationInfoEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationInfoEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationInfoEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
