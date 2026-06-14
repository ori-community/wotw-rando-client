#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompareInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompareInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompareInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CompareInfo__Fields_DEFINED
struct String;
struct SortVersion;
struct SimpleCollator;
struct __declspec(align(8)) CompareInfo__Fields {
    struct String* m_name;
    struct String* m_sortName;
    int32_t win32LCID;
    int32_t culture;
    struct SortVersion* m_SortVersion;
    struct SimpleCollator* collator;
};
#endif
#if !defined(IL2CPP_STRUCT_CompareInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompareInfo__Fields_FWDDECL
#include <Modloader/app/structs/SimpleCollator.h>
#include <Modloader/app/structs/SortVersion.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CompareInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompareInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompareInfo__Fields_FWDDECL)
#include <Modloader/app/structs/CompareInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompareInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
