#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Container_Dictionary_String_String__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Container_Dictionary_String_String__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container_Dictionary_String_String__Array_DEFINED)
#define IL2CPP_STRUCT_Container_Dictionary_String_String__Array_DEFINED
struct Container_Dictionary_String_String__Array__Class;
struct Container_Dictionary_String_String;
struct Container_Dictionary_String_String__Array {
    struct Container_Dictionary_String_String__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Container_Dictionary_String_String* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Container_Dictionary_String_String__Array_FWDDECL)
#define IL2CPP_STRUCT_Container_Dictionary_String_String__Array_FWDDECL
#include <Modloader/app/structs/Container_Dictionary_String_String.h>
#include <Modloader/app/structs/Container_Dictionary_String_String__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Container_Dictionary_String_String__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container_Dictionary_String_String__Array_DEFINED) && !defined(IL2CPP_STRUCT_Container_Dictionary_String_String__Array_FWDDECL)
#include <Modloader/app/structs/Container_Dictionary_String_String__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Container_Dictionary_String_String__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
