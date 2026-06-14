#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MSCompatUnicodeTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MSCompatUnicodeTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_MSCompatUnicodeTable_DEFINED)
#define IL2CPP_STRUCT_MSCompatUnicodeTable_DEFINED
struct MSCompatUnicodeTable__Class;
struct MSCompatUnicodeTable {
    struct MSCompatUnicodeTable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MSCompatUnicodeTable_FWDDECL)
#define IL2CPP_STRUCT_MSCompatUnicodeTable_FWDDECL
#include <Modloader/app/structs/MSCompatUnicodeTable__Class.h>
#endif
#undef IL2CPP_STRUCT_MSCompatUnicodeTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_MSCompatUnicodeTable_DEFINED) && !defined(IL2CPP_STRUCT_MSCompatUnicodeTable_FWDDECL)
#include <Modloader/app/structs/MSCompatUnicodeTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MSCompatUnicodeTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
