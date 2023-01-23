#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_DEFINED)
#include <Modloader/app/structs/Iterator_1_System_String___Fields.h>
#include <Modloader/app/structs/SearchOption__Enum.h>
#if defined(IL2CPP_STRUCT_Iterator_1_System_String___Fields_DEFINED) && defined(IL2CPP_STRUCT_SearchOption__Enum_DEFINED)
#define IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_DEFINED
struct SearchResultHandler_1_System_String_;
struct List_1_System_IO_Directory_SearchData_;
struct Directory_SearchData;
struct String;
struct SafeFindHandle;
struct FileSystemEnumerableIterator_1_System_String___Fields {
    struct Iterator_1_System_String___Fields _;
    struct SearchResultHandler_1_System_String_* _resultHandler;
    struct List_1_System_IO_Directory_SearchData_* searchStack;
    struct Directory_SearchData* searchData;
    struct String* searchCriteria;
    struct SafeFindHandle* _hnd;
    bool needsParentPathDiscoveryDemand;
    bool empty;
    struct String* userPath;
    SearchOption__Enum searchOption;

    struct String* fullPath;
    struct String* normalizedSearchPath;
    bool _checkHost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_FWDDECL)
#define IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_FWDDECL
#include <Modloader/app/structs/Directory_SearchData.h>
#include <Modloader/app/structs/List_1_System_IO_Directory_SearchData_.h>
#include <Modloader/app/structs/SafeFindHandle.h>
#include <Modloader/app/structs/SearchResultHandler_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileSystemEnumerableIterator_1_System_String___Fields_FWDDECL)
#include <Modloader/app/structs/FileSystemEnumerableIterator_1_System_String___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileSystemEnumerableIterator_1_System_String___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
