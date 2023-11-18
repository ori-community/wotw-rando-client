#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FileSystemEnumerableIterator_1_System_Object_.h>
#include <Modloader/app/structs/Directory_SearchData.h>
#include <Modloader/app/structs/Iterator_1_System_Object_.h>
#include <Modloader/app/structs/SearchOption__Enum.h>
#include <Modloader/app/structs/SearchResult.h>
#include <Modloader/app/structs/SearchResultHandler_1_System_Object_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA.h>

namespace app::classes::System::IO::FileSystemEnumerableIterator_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0297E2F0, void, ctor_1, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::String* path, app::String* original_user_path, app::String* search_pattern, app::SearchOption__Enum search_option, app::SearchResultHandler_1_System_Object_* result_handler, bool check_host))
    IL2CPP_REGISTER_METHOD(0x0297E780, void, CommonInit, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297EBD0, void, ctor_2, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::String* full_path, app::String* normalized_search_path, app::String* search_criteria, app::String* user_path, app::SearchOption__Enum search_option, app::SearchResultHandler_1_System_Object_* result_handler, bool check_host))
    IL2CPP_REGISTER_METHOD(0x0297EF80, app::Iterator_1_System_Object_*, Clone, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297F0F0, void, Dispose, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x0297F1D0, bool, MoveNext, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297F890, app::SearchResult*, CreateSearchResult, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::Directory_SearchData* local_search_data, app::Win32Native_WIN32_FIND_DATA* find_data))
    IL2CPP_REGISTER_METHOD(0x0297FA50, void, HandleError, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, int32_t hr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x0297FAA0, void, AddSearchableDirsToStack, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::Directory_SearchData* local_search_data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DoDemand, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::String* full_path_to_demand))
    IL2CPP_REGISTER_METHOD(0x02980030, app::String*, NormalizeSearchPattern, (app::String * search_pattern))
    IL2CPP_REGISTER_METHOD(0x029801D0, app::String*, GetNormalizedSearchCriteria, (app::String * full_search_string, app::String* full_path_mod))
    IL2CPP_REGISTER_METHOD(0x029802D0, app::String*, GetFullSearchString, (app::String * full_path, app::String* search_pattern))
} // namespace app::classes::System::IO::FileSystemEnumerableIterator_1_System_Object_
