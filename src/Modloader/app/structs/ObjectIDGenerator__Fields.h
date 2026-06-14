#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectIDGenerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectIDGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectIDGenerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectIDGenerator__Fields_DEFINED
struct Int64__Array;
struct Object__Array;
struct __declspec(align(8)) ObjectIDGenerator__Fields {
    int32_t m_currentCount;
    int32_t m_currentSize;
    struct Int64__Array* m_ids;
    struct Object__Array* m_objs;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectIDGenerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectIDGenerator__Fields_FWDDECL
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_ObjectIDGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectIDGenerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectIDGenerator__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectIDGenerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectIDGenerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
