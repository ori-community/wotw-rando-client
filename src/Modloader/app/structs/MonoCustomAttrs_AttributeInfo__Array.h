#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_DEFINED)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_DEFINED
struct MonoCustomAttrs_AttributeInfo__Array__Class;
struct MonoCustomAttrs_AttributeInfo;
struct MonoCustomAttrs_AttributeInfo__Array {
    struct MonoCustomAttrs_AttributeInfo__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct MonoCustomAttrs_AttributeInfo* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_FWDDECL)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_FWDDECL
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo.h>
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_DEFINED) && !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Array_FWDDECL)
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
