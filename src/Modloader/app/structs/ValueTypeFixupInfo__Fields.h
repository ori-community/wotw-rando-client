#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_DEFINED
struct FieldInfo_1;
struct Int32__Array;
struct __declspec(align(8)) ValueTypeFixupInfo__Fields {
    int64_t m_containerID;
    struct FieldInfo_1* m_parentField;
    struct Int32__Array* m_parentIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_FWDDECL
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ValueTypeFixupInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueTypeFixupInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
